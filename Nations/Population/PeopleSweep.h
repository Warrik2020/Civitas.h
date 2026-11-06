#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Population
{
    class PeopleSweep : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleSweep(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Population", "PeopleSweep") {}
    public:
        void Step(void* f, void* w, void* s, int span = 1) const { void* __callArgs[] = { f, w, s, &span }; Call("Step", __callArgs, 4); }
        int CycleMonths() const { return ReadStaticField<int>("CycleMonths"); }
        int64_t Flows() const { return ReadStaticField<int64_t>("Flows"); }
        void Flows(int64_t value) const { WriteStaticField<int64_t>("Flows", value); }
    };
}
