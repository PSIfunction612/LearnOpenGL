//
// Created by psifunction on 03.12.2020.
//

#ifndef LEARNOPENGL_TEXTURE_H
#define LEARNOPENGL_TEXTURE_H

#include <string>

class texture {
public:
    texture(const std::string& file_path, unsigned int alpha);
    ~texture();
    int getId();
    void activate(unsigned int slot) const;
private:
    unsigned int textureID = 0;
};


#endif //LEARNOPENGL_TEXTURE_H
