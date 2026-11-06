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
        void* Build(void* grid, void* terrain = nullptr) const { void* __callArgs[] = { grid, terrain }; return CallStatic("Build", __callArgs, 2); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        float Wave0() const { return ReadStaticField<float>("Wave0"); }
        void Wave0(float value) const { WriteStaticField<float>("Wave0", value); }
        float Wave1() const { return ReadStaticField<float>("Wave1"); }
        void Wave1(float value) const { WriteStaticField<float>("Wave1", value); }
        float Wave2() const { return ReadStaticField<float>("Wave2"); }
        void Wave2(float value) const { WriteStaticField<float>("Wave2", value); }
        float Amp0() const { return ReadStaticField<float>("Amp0"); }
        void Amp0(float value) const { WriteStaticField<float>("Amp0", value); }
        float Amp1() const { return ReadStaticField<float>("Amp1"); }
        void Amp1(float value) const { WriteStaticField<float>("Amp1", value); }
        float Amp2() const { return ReadStaticField<float>("Amp2"); }
        void Amp2(float value) const { WriteStaticField<float>("Amp2", value); }
        float TrimLow() const { return ReadStaticField<float>("TrimLow"); }
        void TrimLow(float value) const { WriteStaticField<float>("TrimLow", value); }
        float TrimHigh() const { return ReadStaticField<float>("TrimHigh"); }
        void TrimHigh(float value) const { WriteStaticField<float>("TrimHigh", value); }
        float Reach0() const { return ReadStaticField<float>("Reach0"); }
        void Reach0(float value) const { WriteStaticField<float>("Reach0", value); }
        float Reach1() const { return ReadStaticField<float>("Reach1"); }
        void Reach1(float value) const { WriteStaticField<float>("Reach1", value); }
        float Reach2() const { return ReadStaticField<float>("Reach2"); }
        void Reach2(float value) const { WriteStaticField<float>("Reach2", value); }
        float ReachAmp0() const { return ReadStaticField<float>("ReachAmp0"); }
        void ReachAmp0(float value) const { WriteStaticField<float>("ReachAmp0", value); }
        float ReachAmp1() const { return ReadStaticField<float>("ReachAmp1"); }
        void ReachAmp1(float value) const { WriteStaticField<float>("ReachAmp1", value); }
        float ReachAmp2() const { return ReadStaticField<float>("ReachAmp2"); }
        void ReachAmp2(float value) const { WriteStaticField<float>("ReachAmp2", value); }
        float ReachTail() const { return ReadStaticField<float>("ReachTail"); }
        void ReachTail(float value) const { WriteStaticField<float>("ReachTail", value); }
    };
}
