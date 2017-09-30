#ifndef DEF_GAMEOBJECT_AI_H
#define DEF_GAMEOBJECT_AI_H

#include "Platform/Define.h"

class GameObject;

class GameObjectAI
{
public:
    explicit GameObjectAI(GameObject* go);
    virtual ~GameObjectAI();

    virtual void UpdateAI(const uint32 /*diff*/) {}

    virtual void OnEventHappened(uint16 /*eventId*/, bool /*activate*/, bool /*resume*/) {}

protected:
    GameObject* m_go;
};

#endif

