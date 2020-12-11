//
// Created by user on 11.12.2020.
//

#ifndef LEARNOPENGL_CAMERA_H
#define LEARNOPENGL_CAMERA_H

#include <glm/glm.hpp>

namespace psi {
    class camera {
    public:
        camera() = default;
        camera(glm::vec3 pos);

        void translate(glm::vec3 vec);
        glm::mat4 view();
        glm::vec3 Fwd();
        glm::vec3 Up();
    private:
        glm::vec3 m_pos{0,0,0};
        float yaw = 0;
        float pitch = 45;
    };
}



#endif //LEARNOPENGL_CAMERA_H
