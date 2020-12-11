//
// Created by user on 11.12.2020.
//

#include "camera.h"

#include <glm/gtc/matrix_transform.hpp>

psi::camera::camera(glm::vec3 pos) :m_pos(pos) { }

void psi::camera::translate(glm::vec3 vec) {
    m_pos += vec;
}

glm::mat4 psi::camera::view() {
    return glm::lookAt(
            m_pos,
            m_pos + Fwd(),
            Up()
            );
}

glm::vec3 psi::camera::Fwd() {
    auto x = glm::cos(glm::radians(yaw))*glm::cos(glm::radians(pitch));
    auto y = glm::sin(glm::radians(pitch));
    auto z = glm::sin(glm::radians(yaw))*glm::cos(glm::radians(pitch));
    return glm::vec3(x,y,z);
}

glm::vec3 psi::camera::Up() {
    return glm::vec3(0,1,0);
}

void psi::camera::rotate_x(float angle) {
    pitch += angle;
    if (pitch >= 89.f) pitch = 89.0f;
    if (pitch <= -89.f) pitch = -89.f;
}

void psi::camera::rotate_y(float angle) {
    yaw += angle;
    if (yaw >= 360) yaw -= 360.f;

}
