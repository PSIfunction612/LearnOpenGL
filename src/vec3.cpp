//
// Created by psifunction on 01.12.2020.
//

#include "vec3.h"

psi::vec3::vec3(float x, float y, float z) : x(x), y(y), z(z) { }

std::ostream& psi::operator<<(std::ostream& out, const psi::vec3& a) {
    return out << "x: " << a.x << " y: " << a.y << " z: " << a.z << "\n";
}

psi::vec3 psi::vec3::operator*(float k) const{
    return {k*x, k*y, k*z};
}

psi::vec3 psi::operator+(const psi::vec3& a, const psi::vec3& b) {
    return {a.x + b.x, a.y + b.y, a.z + b.z};
}

float psi::operator*(const psi::vec3& a, const psi::vec3& b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

psi::vec3 psi::operator^(const psi::vec3& a, const psi::vec3& b) {
    return {a.y*b.z - b.y*a.z, a.x*b.z - b.x*a.z, a.y*b.x - b.y*a.x};
}


