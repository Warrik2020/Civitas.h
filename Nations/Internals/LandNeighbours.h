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
        int Length(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallStaticValue<int>("Length", __callArgs, 2); }
        void Step(void* mgr, void* grid, void* internals) const { void* __callArgs[] = { mgr, grid, internals }; CallStatic("Step", __callArgs, 3); }
        void Step(void* mils, void* grid, void* owner, void* alive, void* ensure, void* get) const { void* __callArgs[] = { mils, grid, owner, alive, ensure, get }; CallStatic("Step", __callArgs, 6); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
    };
}
