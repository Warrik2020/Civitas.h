#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LandNeighbours : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LandNeighbours(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LandNeighbours") {}
    public:
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        int Length(int a, int b) const { void* args[] = { &a, &b }; return CallStaticValue<int>("Length", args, 2); }
        void Step(void* mgr, void* grid, void* internals) const { void* args[] = { mgr, grid, internals }; CallStatic("Step", args, 3); }
        void Step(void* mils, void* grid, void* owner, void* alive, void* ensure, void* get) const { void* args[] = { mils, grid, owner, alive, ensure, get }; CallStatic("Step", args, 6); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
    };
}
