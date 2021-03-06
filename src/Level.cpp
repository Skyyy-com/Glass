#include "Level.h"

const Level all_levels[num_levels] = {
  //Level 1
  Level(
    1.8f, -0.12f, 0.5f,                              //Scale, Angle1, Angle2
    Eigen::Vector3f(-2.12f, -2.75f, 0.49f),          //Offset
    Eigen::Vector3f(0.53f, 0.37f, 0.55f),            //Color
    0.035f,                                          //Marble Radius
    -2.0f,                                           //Start Look Direction
    3.3f,                                            //Orbit Distance
    Eigen::Vector3f(-2.95862f, 2.68825f, -1.11868f), //Marble Position
    Eigen::Vector3f(2.95227f, 2.65057f, 1.11848f),   //Flag Position
    -4.0f,                                           //Death Barrier
    false,                                           //Is Planet
    "Genesis"),                                      //Description

  //Level 2   
  Level(
    1.9073f, -9.83f, -1.16f,                         //Scale, Angle1, Angle2
    Eigen::Vector3f(-3.508f, -3.593f, 3.295f),       //Offset
    Eigen::Vector3f(-0.13f, 0.53f, -0.07f),          //Color
    0.03f,                                           //Marble Radius
    -2.365f,                                         //Start Look Direction
    5.8f,                                            //Orbit Distance
    Eigen::Vector3f(-3.40191f, 4.14347f, -3.48312f), //Marble Position
    Eigen::Vector3f(3.40191f, 4.065f, 3.48312f),     //Flag Position
    -4.5f,                                           //Death Barrier
    false,                                           //Is Planet
    "Broccoli Town"),                                //Description

  //Level 3
  Level(
    1.25f, -1.55f, 1.77f,                            //Scale, Angle1, Angle2
    Eigen::Vector3f(-3.35f, 1.75f, 1.55f),           //Offset
    Eigen::Vector3f(0.13f, 0.55f, 0.10f),            //Color
    0.01f,                                           //Marble Radius
    1.570796f,                                       //Start Look Direction
    7.0f,                                            //Orbit Distance
    Eigen::Vector3f(3.25f, 7.75f, 0.0f),             //Marble Position
    Eigen::Vector3f(-5.5f, 6.50f, -2.5f),            //Flag Position
    -7.0f,                                           //Death Barrier
    false,                                           //Is Planet
    "Purple Planet"),                                //Description

  //Level 4
  Level(
    1.65f, 0.37f, 5.26f,                             //Scale, Angle1, Angle2
    Eigen::Vector3f(-1.41f, -0.22f, -0.77f),         //Offset
    Eigen::Vector3f(0.01f, 1.50f, -0.75f),           //Color
    0.01f,                                           //Marble Radius
    3.14159f,                                        //Start Look Direction
    3.1f,                                            //Orbit Distance
    Eigen::Vector3f(0.0f, 2.26418f, 0.0f),           //Marble Position
    Eigen::Vector3f(0.0f, -2.25f, 0.0f),             //Flag Position
    -999.0f,                                         //Death Barrier
    true,                                            //Is Planet
    "Mr. Worldwide"),                                //Description

  //Level 5
  Level(
    1.77f, -0.22f, 5.62f,                            //Scale, Angle1, Angle2
    Eigen::Vector3f(-2.08f, -1.42f, -1.93f),         //Offset
    Eigen::Vector3f(0.77f, -0.55f, -0.35f),          //Color
    0.02f,                                           //Marble Radius
    0.545116f,                                       //Start Look Direction
    3.3f,                                            //Orbit Distance
    Eigen::Vector3f(1.98046f, 2.56955f, 2.08186f),   //Marble Position
    Eigen::Vector3f(-0.514117f, 3.14f, -2.01516f),   //Flag Position
    -3.8f,                                           //Death Barrier
    false,                                           //Is Planet
    "Wait? They Can Do That?",                       //Description
    0.0f, 0.06f, 0.0f),                              //Animation

  //Level 6
  Level(
    1.66f, 1.53f, 0.20f,                             //Scale, Angle1, Angle2
    Eigen::Vector3f(-3.83f, -1.94f, -1.09f),         //Offset
    Eigen::Vector3f(0.55f, 0.05f, 0.20f),            //Color
    0.02f,                                           //Marble Radius
    0.0f,                                            //Start Look Direction
    3.1f,                                            //Orbit Distance
    Eigen::Vector3f(0.68147f, 2.80038f, 2.52778f),   //Marble Position
    Eigen::Vector3f(0.0f, 2.84448f, -2.71705f),      //Flag Position
    -4.0f,                                           //Death Barrier
    false,                                           //Is Planet
    "Dont Fall"),                                    //Description

  //Level 7
  Level(
    1.35f, -1.35f, -3.55f,                           //Scale, Angle1, Angle2
    Eigen::Vector3f(-1.55f, -0.13f, -2.52f),         //Offset
    Eigen::Vector3f(1.5f, 0.55f, 0.0f),              //Color
    0.077f,                                          //Marble Radius
    0.0f,                                            //Start Look Direction
    9.9f,                                            //Orbit Distance
    Eigen::Vector3f(-1.75f, 5.0f, 0.0f),             //Marble Position
    Eigen::Vector3f(0.0f, -5.0f, 0.0f),              //Flag Position
    -55.5f,                                          //Death Barrier
    true,                                            //Is Planet
    "The Power Of The Mind"),                        //Description
  
  //Level 8
  Level(
    1.87f, -3.12f, 0.02f,                            //Scale, Angle1, Angle2
    Eigen::Vector3f(-3.57f, 0.129f, 2.95f),          //Offset
    Eigen::Vector3f(0.73f, 0.10f, 0.30f),            //Color
    0.02f,                                           //Marble Radius
    3.14159f,                                        //Start Look Direction
    4.2f,                                            //Orbit Distance
    Eigen::Vector3f(0.0f, 3.66236f, -3.30036f),      //Marble Position
    Eigen::Vector3f(0.0f, 3.64236f, 3.80f),          //Flag Position
    -3.6f,                                           //Death Barrier
    false,                                           //Is Planet
    "The Runway",                                    //Description
    0.0f, 0.0f, -0.10f),                             //Animation

  //Level 9
  Level(
    1.81f, -4.84f, -2.99f,                           //Scale, Angle1, Angle2
    Eigen::Vector3f(-2.905f, 0.765f, -4.165f),       //Offset
    Eigen::Vector3f(-0.75f, 0.55f, 0.55f),           //Color
    0.0175f,                                         //Marble Radius
    -1.570796f,                                      //Start Look Direction
    4.5f,                                            //Orbit Distance
    Eigen::Vector3f(-4.63064f, 3.6365f, 0.0f),       //Marble Position
    Eigen::Vector3f(4.63f, 3.61f, 0.0f),             //Flag Position
    -5.5f,                                           //Death Barrier
    false,                                           //Is Planet
    "Big Ol Hole"),                                  //Description

  //Level 10
  Level(
    1.93f, 1.34637f, 1.58f,                          //Scale, Angle1, Angle2
    Eigen::Vector3f(-2.31f, 1.123f, 1.56f),          //Offset
    Eigen::Vector3f(-0.75f, -0.15f, 0.50f),          //Color
    0.02f,                                           //Marble Radius
    -2.39681f,                                       //Start Look Direction
    2.7f,                                            //Orbit Distance
    Eigen::Vector3f(-1.71412f, 1.84836f, -1.70884f), //Marble Position
    Eigen::Vector3f(0.0f, 2.13651f, 1.74782f),       //Flag Position
    -3.6f,                                           //Death Barrier
    false,                                           //Is Planet
    "Mr Doctor Strangest",                           //Description
    0.1f, 0.0f, 0.0f),                               //Animation

  //Level 11
  Level(
    1.88f, 1.52f, 4.91f,                             //Scale, Angle1, Angle2
    Eigen::Vector3f(-4.54f, -1.26f, 0.1f),           //Offset
    Eigen::Vector3f(-1.0f, 0.35f, -0.45f),           //Color
    0.03f,                                           //Marble Radius
    -1.570796f,                                      //Start Look Direction
    5.7f,                                            //Orbit Distance
    Eigen::Vector3f(-2.8896f, 3.76526f, 0.0f),       //Marble Position
    Eigen::Vector3f(2.88924f, 3.73f, 0.0f),          //Flag Position
    -4.5f,                                           //Death Barrier
    false,                                           //Is Planet
    "Baby Sponge"),                                   //Description

  //Level 12
  Level(
    1.6f, 3.77f, 3.93f,                              //Scale, Angle1, Angle2
    Eigen::Vector3f(-2.0f, -0.41f, -1.43f),          //Offset
    Eigen::Vector3f(0.45f, 0.40f, 0.05f),            //Color
    0.02f,                                           //Marble Radius
    -1.570796f,                                      //Start Look Direction
    3.5f,                                            //Orbit Distance
    Eigen::Vector3f(-2.30432f, 0.0444069f, 2.31072f),//Marble Position
    Eigen::Vector3f(2.30432f, 0.0244069f, -2.31072f),//Flag Position
    -1.0f,                                           //Death Barrier
    false,                                           //Is Planet
    "Lizardo",                                       //Description
    0.0555f, 0.0f, 0.0f),                            //Animation

  //Level 13
  Level(
    2.08f, -4.79f, 3.16f,                            //Scale, Angle1, Angle2
    Eigen::Vector3f(-7.43f, 5.96f, -6.23f),          //Offset
    Eigen::Vector3f(0.00f, -0.35f, 0.75f),           //Color
    0.023f,                                          //Marble Radius
    1.570796f,                                       //Start Look Direction
    7.6f,                                            //Orbit Distance
    Eigen::Vector3f(6.06325f, 6.32712f, 0.0f),       //Marble Position
    Eigen::Vector3f(0.0f, 6.72f, 0.0f),              //Flag Position
    -7.0f,                                           //Death Barrier
    false,                                           //Is Planet
    "Run",
	0.005, 0.0035, 0.15),                      

  //Level 14
  Level(
    2.0773f, -9.66f, -1.34f,                         //Scale, Angle1, Angle2
    Eigen::Vector3f(-1.238f, -1.533f, 1.085f),       //Offset
    Eigen::Vector3f(0.69f, -0.69f, 0.69f),           //Color
    0.01f,                                           //Marble Radius
    1.4f,                                            //Start Look Direction
    3.0f,                                            //Orbit Distance
    Eigen::Vector3f(1.03543f, 1.06432f, 1.22698f),   //Marble Position
    Eigen::Vector3f(-1.39536f, 0.641835f, 0.0f),     //Flag Position
    -2.0f,                                           //Death Barrier
    false,                                           //Is Planet
    "Find The Flag"),                                //Description

  //Level 15
  Level(
    1.78f, -0.1f, 3.28f,                             //Scale, Angle1, Angle2
    Eigen::Vector3f(-1.47f, 1.7f, -0.4f),            //Offset
    Eigen::Vector3f(0.42f, 0.38f, 0.19f),            //Color
    0.02f,                                           //Marble Radius
    3.14159f,                                        //Start Look Direction
    2.9f,                                            //Orbit Distance
    Eigen::Vector3f(0.0f, 2.1431f, 0.0f),            //Marble Position
    Eigen::Vector3f(0.0, -2.12f, 0.0),               //Flag Position
    -999.0f,                                         //Death Barrier
    true,                                            //Is Planet
    "!!!",                                           //Description
    0.0f, 0.08f, 0.0f),                              //Animation

  Level(
    2.0773f, -9.66f, -1.34f,                         //Scale, Angle1, Angle2
    Eigen::Vector3f(-1.238f, -1.533f, 1.085f),       //Offset
    Eigen::Vector3f(-0.420f, 0.40f, 0.20f),          //Color
    0.005f,                                          //Marble Radius
    0.78539816339f,                                  //Start Look Direction
    2.0f,                                            //Orbit Distance
    Eigen::Vector3f(1.04172f, 1.41944f, 1.09742f),   //Marble Position
    Eigen::Vector3f(-1.04172f, 1.414f, -1.09742f),   //Flag Position
    -2.0f,                                           //Death Barrier
    false,                                           //Is Planet
    "Top Of The World",
	0.0f, 0.05f, 0.0f),                       

  Level(
    1.8093f, -3.165f, -3.2094777f,                   //Scale, Angle1, Angle2
    Eigen::Vector3f(-1.0939f, -0.43495f, -3.1113f),  //Offset
    Eigen::Vector3f(0.77f, 0.77f, -0.33f),           //77 + 33 = 100
    0.005f,                                          //Marble Radius
    0.0f,                                            //Start Look Direction
    5.0f,                                            //Orbit Distance
    Eigen::Vector3f(0.0f, -0.483245f, 2.16278f),     //Marble Position
    Eigen::Vector3f(0.0f, -0.489f, -2.16278f),       //Flag Position
    -5.0f,                                           //Death Barrier
    false,                                           //Is Planet
    "Building Bridges",                              //Description
    0.0f, 0.0f, 0.06f),                              //Animation

  Level(
    1.95f, 1.570796f, 0.0f,                          //Scale, Angle1, Angle2
    Eigen::Vector3f(-6.75f, -3.0f, 0.0f),            //Offset
    Eigen::Vector3f(0.42f, 0.38f, 0.19f),            //Color
    0.022f,                                          //Marble Radius
    0.0f,                                            //Start Look Direction
    6.3f,                                            //Orbit Distance
    Eigen::Vector3f(0.0f, 3.96637f, 4.54647f),       //Marble Position
    Eigen::Vector3f(0.0f, 0.396f, -2.38815f),        //Flag Position
    -5.0f,                                           //Death Barrier
    false,                                           //Is Planet
    "Spong- SquareBob"),                             //Description

  Level(
    1.91f, 0.06f, -0.76f,                            //Scale, Angle1, Angle2
    Eigen::Vector3f(-3.44f, -0.69f, -1.14f),         //Offset
    Eigen::Vector3f(0.75f, 0.40f, 0.20f),            //Color
    0.012f,                                          //Marble Radius
    3.14159f,                                        //Start Look Direction
    5.0f,                                            //Orbit Distance
    Eigen::Vector3f(0.0f, 3.78299f, 0.0f),           //Marble Position
    Eigen::Vector3f(0.0f, -3.77f, 0.0f),             //Flag Position
    -999.0f,                                         //Death Barrier
    true,                                            //Is Planet
    "OOO Pretty",                                    //Description
    0.0f, 0.15f, 0.05f),                             //Animation

  Level(
    1.8986f, -0.4166f, 0.00683f,                     //Scale, Angle1, Angle2
    Eigen::Vector3f(-2.5130f, -5.4067f, -2.51f),     //Offset
    Eigen::Vector3f(0.45f, -0.30f, 0.30f),           //Color
    0.01f,                                           //Marble Radius
    -1.570796f,                                      //Start Look Direction
    5.0f,                                            //Orbit Distance
    Eigen::Vector3f(1.19695f, 3.19773f, 2.8491f),    //Marble Position
    Eigen::Vector3f(1.168f, 3.195f, -2.8491f),       //Flag Position
    -5.0f,                                           //Death Barrier
    false,                                           //Is Planet
    "Racecar"),                                      //Description

  Level(
    2.03413f, 1.688f, -1.57798f,                     //Scale, Angle1, Angle2
    Eigen::Vector3f(-4.803822f, -4.1f, -1.39063f),   //Offset
    Eigen::Vector3f(-0.95f, -0.16f, 0.14f),          //Color
    0.010055f,                                       //Marble Radius
    1.570796f,                                       //Start Look Direction
    7.0f,                                            //Orbit Distance
    Eigen::Vector3f(3.77655f, 4.7211f, 0.0f),        //Marble Position
    Eigen::Vector3f(-3.77655f, 4.716f, 0.0f),        //Flag Position
    -5.0f,                                           //Death Barrier
    false,                                           //Is Planet
    "BOUNCE!!",
	0.03f, -0.03f, 0.03f),                        

  Level(
    1.6516888f, 0.026083898f, -0.7996324f,           //Scale, Angle1, Angle2
    Eigen::Vector3f(-3.85863f, -5.13741f, -0.918303f),//Offset
    Eigen::Vector3f(0.45f, -0.35f, 0.20f),           //Color
    0.016f,                                          //Marble Radius
    0.0f,                                            //Start Look Direction
    7.0f,                                            //Orbit Distance
    Eigen::Vector3f(0.0f, 5.91936f, 4.3357f),        //Marble Position
    Eigen::Vector3f(0.0f, -1.01f, -3.94f),           //Flag Position
    -6.5f,                                           //Death Barrier
    false,                                           //Is Planet
    "Rats Raw",                                      //Star War
	0.0f, 0.0f, -0.05f),                        

  Level(
    1.77746f, 4.62318f, 0.0707307f,                  //Scale, Angle1, Angle2
    Eigen::Vector3f(-4.6867f, -0.84376f, 1.98158f),  //Offset
    Eigen::Vector3f(0.55f, -0.5f, 0.15f),            //Color
    0.010f,                                          //Marble Radius
    1.570796f,                                       //Start Look Direction
    7.0f,                                            //Orbit Distance
    Eigen::Vector3f(3.03669f, 4.3497f, 0.0f),        //Marble Position
    Eigen::Vector3f(-3.03669f, 4.331f, 0.0f),
	-5.0f,                                           //Death Barrier
    false,                                           //Is Planet
    "Hopscotch",
	0.0f, 0.05f, 0.0f),                        

  Level(
    2.13f, -1.77f, -1.62f,                           //Scale, Angle1, Angle2
    Eigen::Vector3f(-4.99f, -3.05f, -4.48f),         //Offset
    Eigen::Vector3f(0.42f, 0.38f, 0.19f),            //Color
    0.01f,                                           //Marble Radius
    3.14159f,                                        //Start Look Direction
    6.2f,                                            //Orbit Distance
    Eigen::Vector3f(0.479104f, 2.35f, 4.5f),         //Marble Position
    Eigen::Vector3f(0.479104f, 2.35f, -4.5f),
	-4.0f,                                           //Death Barrier
    false,                                           //Is Planet
    "Skeletal Plates"),                              //Description
  
  Level(
	1.95f, 1.5f, 0.0f,
	Eigen::Vector3f(-6.75f, -3.0f, 0.0f),
	Eigen::Vector3f(0.42f, 0.38f, 0.19f),
	0.05f,
	3.0f,
	5.0f,
	Eigen::Vector3f(0.0f, 3.96637f, 4.54647f),	
	Eigen::Vector3f(0.0f, 0.396f, -2.38815f),
	-9.0f,
	true,
	"The Revenge Of The Sponge",
	0.0f, 0.2f, 0.0f)
};

Level::Level(float s, float a1, float a2,
  const Eigen::Vector3f& v,
  const Eigen::Vector3f& c,
  float rad,
  float look_x,
  float orbit_d,
  const Eigen::Vector3f& start,
  const Eigen::Vector3f& end,
  float kill,
  bool pg,
  const char* desc,
  float an1, float an2, float an3)
{
  params[0] = s;
  params[1] = a1;
  params[2] = a2;
  params.segment<3>(3) = v;
  params.segment<3>(6) = c;
  marble_rad = rad;
  start_look_x = look_x;
  orbit_dist = orbit_d;
  start_pos = start;
  end_pos = end;
  kill_y = kill;
  planet = pg;
  txt = desc;
  anim_1 = an1;
  anim_2 = an2;
  anim_3 = an3;
}
