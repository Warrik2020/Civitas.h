#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class ResourceManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResourceManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "ResourceManager") {}
    public:
        void RefreshNow() const { Call("RefreshNow", nullptr, 0); }
        int RefreshIntervalTicks() const { return ReadStaticField<int>("RefreshIntervalTicks"); }
    };
}
