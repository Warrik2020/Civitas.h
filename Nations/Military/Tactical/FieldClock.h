#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class FieldClock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FieldClock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "FieldClock") {}
    public:
        float BattleSecondsPerRealSecond(float ticksPerSecond) const { void* args[] = { &ticksPerSecond }; return CallStaticValue<float>("BattleSecondsPerRealSecond", args, 1); }
        int QuantaFor(float rate) const { void* args[] = { &rate }; return CallStaticValue<int>("QuantaFor", args, 1); }
        void Reset() const { Call("Reset", nullptr, 0); }
        void Owe(double battleSeconds) const { void* args[] = { &battleSeconds }; Call("Owe", args, 1); }
        int StepsDue(int quanta) const { void* args[] = { &quanta }; return CallValue<int>("StepsDue", args, 1); }
        void Ran(int steps, int quanta) const { void* args[] = { &steps, &quanta }; Call("Ran", args, 2); }
        void RanSeconds(double seconds) const { void* args[] = { &seconds }; Call("RanSeconds", args, 1); }
        void UpdatePace(float realDt, double stepSeconds, float fits) const { void* args[] = { &realDt, &stepSeconds, &fits }; Call("UpdatePace", args, 3); }
        double MaxOwed() const { return ReadStaticField<double>("MaxOwed"); }
    };
}
