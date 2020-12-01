//
// Created by psifunction on 01.12.2020.
//

#ifndef LEARNOPENGL_VEC3_H
#define LEARNOPENGL_VEC3_H

#include <iostream>

namespace psi {
    class vec3 {
    public:
        vec3(float x, float y, float z);

        vec3(const vec3& u) = default;
        vec3(vec3&& u) = default;

        friend std::ostream& operator<<(std::ostream& out, const vec3& a);

        float x = 1.f;
        float y = 1.f;
        float z = 1.f;
    };

    vec3 operator+(const vec3& a, const vec3& b);
    float operator*(const vec3& a, const vec3& b);
    vec3 operator^(const vec3& a, const vec3& b);

    std::ostream& operator<<(std::ostream& out, const vec3& a);
}

#endif //LEARNOPENGL_VEC3_H
