/*
 * models.h
 *
 *  Created on: Dec 20, 2024
 *      Author: bala
 */

#ifndef INC_MODELS_H_
#define INC_MODELS_H_

typedef struct diff_drive_params
{
	float x,y,theta;
}diff_drive_params;

typedef struct diff_drive_model
{
	diff_drive_params params;
	float linear_x, angular_z;
	uint32_t time_prev;
}diff_drive_model;

void diff_drive_model_init(diff_drive_model);

void predict();

#endif /* INC_MODELS_H_ */
