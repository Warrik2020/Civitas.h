#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class MilitaryFormat : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MilitaryFormat(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "MilitaryFormat") {}
    public:
        void* PushWord(void* push) const { void* __callArgs[] = { push }; return CallStatic("PushWord", __callArgs, 1); }
        void* PushName(void* push) const { void* __callArgs[] = { push }; return CallStatic("PushName", __callArgs, 1); }
        void* PushEffect(void* push) const { void* __callArgs[] = { push }; return CallStatic("PushEffect", __callArgs, 1); }
        void* Posture(void* front) const { void* __callArgs[] = { front }; return CallStatic("Posture", __callArgs, 1); }
        void* Advantage(void* front) const { void* __callArgs[] = { front }; return CallStatic("Advantage", __callArgs, 1); }
        float AdvantageFill(void* front) const { void* __callArgs[] = { front }; return CallStaticValue<float>("AdvantageFill", __callArgs, 1); }
        float SupplyLinesMul(void* mil, void* ids) const { void* __callArgs[] = { mil, ids }; return CallStaticValue<float>("SupplyLinesMul", __callArgs, 2); }
        void* SupplyLinesTag(float mul) const { void* __callArgs[] = { &mul }; return CallStatic("SupplyLinesTag", __callArgs, 1); }
        void* SupplyLinesNote(float mul) const { void* __callArgs[] = { &mul }; return CallStatic("SupplyLinesNote", __callArgs, 1); }
        void* Divisions(int n) const { void* __callArgs[] = { &n }; return CallStatic("Divisions", __callArgs, 1); }
        void* Gold(int gold) const { void* __callArgs[] = { &gold }; return CallStatic("Gold", __callArgs, 1); }
        void* DivisionName(void* d) const { void* __callArgs[] = { d }; return CallStatic("DivisionName", __callArgs, 1); }
        void* Ordinal(int n) const { void* __callArgs[] = { &n }; return CallStatic("Ordinal", __callArgs, 1); }
        void* LevyClock(void* d, float ticksLeft, float ticksPerYear) const { void* __callArgs[] = { d, &ticksLeft, &ticksPerYear }; return CallStatic("LevyClock", __callArgs, 3); }
        void* Activity(void* d) const { void* __callArgs[] = { d }; return CallStatic("Activity", __callArgs, 1); }
    };
}
