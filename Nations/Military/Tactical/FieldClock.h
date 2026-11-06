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
        float BattleSecondsPerRealSecond(float ticksPerSecond) const { void* __callArgs[] = { &ticksPerSecond }; return CallStaticValue<float>("BattleSecondsPerRealSecond", __callArgs, 1); }
        int QuantaFor(float rate) const { void* __callArgs[] = { &rate }; return CallStaticValue<int>("QuantaFor", __callArgs, 1); }
        void Reset() const { Call("Reset", nullptr, 0); }
        void Owe(double battleSeconds) const { void* __callArgs[] = { &battleSeconds }; Call("Owe", __callArgs, 1); }
        int StepsDue(int quanta) const { void* __callArgs[] = { &quanta }; return CallValue<int>("StepsDue", __callArgs, 1); }
        void Ran(int steps, int quanta) const { void* __callArgs[] = { &steps, &quanta }; Call("Ran", __callArgs, 2); }
        void RanSeconds(double seconds) const { void* __callArgs[] = { &seconds }; Call("RanSeconds", __callArgs, 1); }
        void UpdatePace(float realDt, double stepSeconds, float fits) const { void* __callArgs[] = { &realDt, &stepSeconds, &fits }; Call("UpdatePace", __callArgs, 3); }
        double MaxOwed() const { return ReadStaticField<double>("MaxOwed"); }
    };
}
