#ifndef PLAYINGSCREEN_H
#define PLAYINGSCREEN_H

#include "Screen.h"

class PlayingScreen : public Screen {
private:
    void processFrame(Mat&, const TrackingInfo&) const;
    void drawTrackingMarker(Mat& frame, const Point& center) const;
};

#endif
