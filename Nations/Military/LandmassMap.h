#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class LandmassMap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LandmassMap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "LandmassMap") {}
    public:
        void Invalidate() const { CallStatic("Invalidate", nullptr, 0); }
        void Prebuild(void* grid) const { void* args[] = { grid }; CallStatic("Prebuild", args, 1); }
        void* Components(void* grid) const { void* args[] = { grid }; return CallStatic("Components", args, 1); }
        int CompAt(void* grid, int tileIndex) const { void* args[] = { grid, &tileIndex }; return CallStaticValue<int>("CompAt", args, 2); }
        int CompAt(void* grid, void* p) const { void* args[] = { grid, p }; return CallStaticValue<int>("CompAt", args, 2); }
        bool SameLandmass(void* grid, void* from, void* to) const { void* args[] = { grid, from, to }; return CallStaticValue<bool>("SameLandmass", args, 3); }
    };
}
