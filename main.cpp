#include <liveMedia/liveMedia.hh>
#include <BasicUsageEnvironment/BasicUsageEnvironment.hh>

#include <QApplication>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/mathematics.h>
#include <libswscale/swscale.h>
}

#include "AppWindow.h"

#include "RtspClient.h"
#include "DummySink.h"
#include "StreamState.h"



int main(int argc, char** argv)
{
    avcodec_register_all();
    av_register_all();

    QApplication app(argc, argv);
    AppWindow win(argv[0]);
    win.show();

    return app.exec();
}
