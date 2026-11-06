#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityGrain : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityGrain(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityGrain") {}
    public:
        void* Build(void* grid, void* terrain = nullptr) const { void* args[] = { grid, terrain }; return CallStatic("Build", args, 2); }
        int GrainAt(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("GrainAt", args, 2); }
        int ReachAt(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("ReachAt", args, 2); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        float Wave0() const { return ReadStaticField<float>("Wave0"); }
        void SetWave0(float value) const { WriteStaticField<float>("Wave0", value); }
        float Wave1() const { return ReadStaticField<float>("Wave1"); }
        void SetWave1(float value) const { WriteStaticField<float>("Wave1", value); }
        float Wave2() const { return ReadStaticField<float>("Wave2"); }
        void SetWave2(float value) const { WriteStaticField<float>("Wave2", value); }
        float Amp0() const { return ReadStaticField<float>("Amp0"); }
        void SetAmp0(float value) const { WriteStaticField<float>("Amp0", value); }
        float Amp1() const { return ReadStaticField<float>("Amp1"); }
        void SetAmp1(float value) const { WriteStaticField<float>("Amp1", value); }
        float Amp2() const { return ReadStaticField<float>("Amp2"); }
        void SetAmp2(float value) const { WriteStaticField<float>("Amp2", value); }
        float TrimLow() const { return ReadStaticField<float>("TrimLow"); }
        void SetTrimLow(float value) const { WriteStaticField<float>("TrimLow", value); }
        float TrimHigh() const { return ReadStaticField<float>("TrimHigh"); }
        void SetTrimHigh(float value) const { WriteStaticField<float>("TrimHigh", value); }
        float Reach0() const { return ReadStaticField<float>("Reach0"); }
        void SetReach0(float value) const { WriteStaticField<float>("Reach0", value); }
        float Reach1() const { return ReadStaticField<float>("Reach1"); }
        void SetReach1(float value) const { WriteStaticField<float>("Reach1", value); }
        float Reach2() const { return ReadStaticField<float>("Reach2"); }
        void SetReach2(float value) const { WriteStaticField<float>("Reach2", value); }
        float ReachAmp0() const { return ReadStaticField<float>("ReachAmp0"); }
        void SetReachAmp0(float value) const { WriteStaticField<float>("ReachAmp0", value); }
        float ReachAmp1() const { return ReadStaticField<float>("ReachAmp1"); }
        void SetReachAmp1(float value) const { WriteStaticField<float>("ReachAmp1", value); }
        float ReachAmp2() const { return ReadStaticField<float>("ReachAmp2"); }
        void SetReachAmp2(float value) const { WriteStaticField<float>("ReachAmp2", value); }
        float ReachTail() const { return ReadStaticField<float>("ReachTail"); }
        void SetReachTail(float value) const { WriteStaticField<float>("ReachTail", value); }
        int Stride() const { return ReadStaticField<int>("Stride"); }
        void* Grid() const { return ReadField<void*>("Grid"); }
    };
}
