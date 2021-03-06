#ifndef _COLOR_KINECT_STREAM_H_
#define _COLOR_KINECT_STREAM_H_

#include "BaseKinectStream.h"

struct INuiSensor;
namespace kinect_device {


class ColorKinectStream : public BaseKinectStream
{
public:
	ColorKinectStream(KinectStreamImpl* pStreamImpl);

	virtual void frameReceived(NUI_IMAGE_FRAME& imageFrame, NUI_LOCKED_RECT &LockedRect);

};
} // namespace kinect_device

#endif //_COLOR_KINECT_STREAM_H_
