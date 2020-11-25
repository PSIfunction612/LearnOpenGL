//
// Created by psifunction on 25.11.2020.
//

#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

namespace psi {
    class shader {
    public:
        shader(const char *vertexPath, const char *fragmentPath);

        void use();

        unsigned int getID();

        void setBool(const std::string &name, bool value) const;

        void setInt(const std::string &name, int value) const;

        void setFloat(const std::string &name, float value) const;

    private:
        unsigned int ID;

        void checkCompileErrors(unsigned int shader, std::string type);
    };
}


#endif //LEARNOPENGL_SHADER_H
