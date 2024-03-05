//
// MIT License
//
// Copyright (c) 2024 Leander Stephen D'Souza
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>

namespace gazebo {
    class breakoutGazeboPlugin : public ModelPlugin {
        public:
            void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf) {
                // Set the initial velocity (e.g., along the X-axis)
                physics::LinkPtr ballLink = _model->GetLink("ball_link");
                ignition::math::Vector3d initialVelocity(0.0, 0.0, -5.0); // Adjust as needed
                ballLink->SetLinearVel(initialVelocity);
            }
    };
    GZ_REGISTER_MODEL_PLUGIN(breakoutGazeboPlugin)
}

