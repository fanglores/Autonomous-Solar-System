#pragma once

#include <opencv2/opencv.hpp>

#include "camera.h"
#include "generator.h"

enum class SystemState
{
	STARTING,
	WORKING,
	STARTING_GENERATOR,
	STOPPING_GENERATOR,
	STOPPING,
	OFF,
	ERROR
};

class System
{
private:
	Camera* camera;
	Generator* generator;
	
	SystemState state;
	
    	cv::Mat previousPhoto, currentPhoto;
public:
    System(Camera* cp, Generator* gp);

	int Run();
	int TurnOn();
	int TurnOff();
    	int updatePhoto();
};

