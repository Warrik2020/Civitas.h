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
        void* PushWord(void* push) const { void* args[] = { push }; return CallStatic("PushWord", args, 1); }
        void* PushName(void* push) const { void* args[] = { push }; return CallStatic("PushName", args, 1); }
        void* PushEffect(void* push) const { void* args[] = { push }; return CallStatic("PushEffect", args, 1); }
        void* Posture(void* front) const { void* args[] = { front }; return CallStatic("Posture", args, 1); }
        void* Advantage(void* front) const { void* args[] = { front }; return CallStatic("Advantage", args, 1); }
        float AdvantageFill(void* front) const { void* args[] = { front }; return CallStaticValue<float>("AdvantageFill", args, 1); }
        float SupplyLinesMul(void* mil, void* ids) const { void* args[] = { mil, ids }; return CallStaticValue<float>("SupplyLinesMul", args, 2); }
        void* SupplyLinesTag(float mul) const { void* args[] = { &mul }; return CallStatic("SupplyLinesTag", args, 1); }
        void* SupplyLinesNote(float mul) const { void* args[] = { &mul }; return CallStatic("SupplyLinesNote", args, 1); }
        void* Divisions(int n) const { void* args[] = { &n }; return CallStatic("Divisions", args, 1); }
        void* Gold(int gold) const { void* args[] = { &gold }; return CallStatic("Gold", args, 1); }
        void* DivisionName(void* d) const { void* args[] = { d }; return CallStatic("DivisionName", args, 1); }
        void* Ordinal(int n) const { void* args[] = { &n }; return CallStatic("Ordinal", args, 1); }
        void* LevyClock(void* d, float ticksLeft, float ticksPerYear) const { void* args[] = { d, &ticksLeft, &ticksPerYear }; return CallStatic("LevyClock", args, 3); }
        void* Activity(void* d) const { void* args[] = { d }; return CallStatic("Activity", args, 1); }
    };
}
