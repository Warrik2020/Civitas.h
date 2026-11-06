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
        bool IsPin(int vx, int vy) const { void* __callArgs[] = { &vx, &vy }; return CallValue<bool>("IsPin", __callArgs, 2); }
        int EdgeTag(int vx, int vy, int nx, int ny) const { void* __callArgs[] = { &vx, &vy, &nx, &ny }; return CallValue<int>("EdgeTag", __callArgs, 4); }
        int SeaTag() const { return ReadStaticField<int>("SeaTag"); }
    };
}
