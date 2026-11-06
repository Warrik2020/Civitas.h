#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval::AI
{
    class NavalAI : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NavalAI(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval.AI", "NavalAI") {}
    public:
        void ClearTasks() const { CallStatic("ClearTasks", nullptr, 0); }
        void* CaptureTaskForces(int tick, void* fleetIndex, void* divisionIndex) const { void* __callArgs[] = { &tick, fleetIndex, divisionIndex }; return CallStatic("CaptureTaskForces", __callArgs, 3); }
        void RestoreTaskForces(void* saved, void* fleetIdsByIndex, void* members, void* military) const { void* __callArgs[] = { saved, fleetIdsByIndex, members, military }; CallStatic("RestoreTaskForces", __callArgs, 4); }
        int TaskKeyOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("TaskKeyOf", __callArgs, 1); }
        void* Evaluate(void* mm, void* mil, void* n, void* it, void* cities, int tick) const { void* __callArgs[] = { mm, mil, n, it, cities, &tick }; return CallStatic("Evaluate", __callArgs, 6); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
    };
}
