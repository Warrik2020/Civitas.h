#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class OwnerJunctions : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit OwnerJunctions(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "OwnerJunctions") {}
    public:
        bool IsPin(int vx, int vy) const { void* args[] = { &vx, &vy }; return CallValue<bool>("IsPin", args, 2); }
        int EdgeTag(int vx, int vy, int nx, int ny) const { void* args[] = { &vx, &vy, &nx, &ny }; return CallValue<int>("EdgeTag", args, 4); }
        int SeaTag() const { return ReadStaticField<int>("SeaTag"); }
    };
}
