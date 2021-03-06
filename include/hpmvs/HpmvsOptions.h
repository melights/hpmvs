/**
* This file is part of HPMVS (Hierarchical Prioritized Multiview Stereo).
*
* Copyright (C) 2015-2016 Alex Locher <alocher at ethz dot ch> (ETH Zuerich)
* For more information see <https://github.com/alexlocher/hpmvs>
*
* HPMVS is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* HPMVS is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with HPMVS. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef HPMVS_HPMVSOPTIONS_H_
#define HPMVS_HPMVSOPTIONS_H_


namespace mo3d {



struct HpmvsOptions {

	int MAXLEVEL = 5;
	int START_LEVEL = 4;

	float MAX_ANGLE = 60.0f * M_PI / 180.0f;
	float MIN_ANGLE = 10.0f * M_PI / 180.0f;

	// optimization options
	int NR_OPTIMIZATION_THREADS = 3;
	int MAX_IMAGES_PER_PATCH = 6;
	int MIN_IMAGES_PER_PATCH = 3;
	float NCC_ALPHA_1 = 0.4;
	float NCC_ALPHA_2 = 0.5; // was 0.7

	// test options
	float DEPTH_TEST_FACTOR = 1.0f;

	// outfolder
	std::string OUTFOLDER = "/tmp";

};


}



#endif /* HPMVS_HPMVSOPTIONS_H_ */
