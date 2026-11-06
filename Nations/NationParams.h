#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class NationParams : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationParams(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "NationParams") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        void* color() const { return ReadField<void*>("color"); }
        void color(void* value) const { WriteField<void*>("color", value); }
        void* flag() const { return ReadField<void*>("flag"); }
        void flag(void* value) const { WriteField<void*>("flag", value); }
        int culture() const { return ReadField<int>("culture"); }
        void culture(int value) const { WriteField<int>("culture", value); }
        float heading() const { return ReadField<float>("heading"); }
        void heading(float value) const { WriteField<float>("heading", value); }
        float coastalBias() const { return ReadField<float>("coastalBias"); }
        void coastalBias(float value) const { WriteField<float>("coastalBias", value); }
        float expansionRate() const { return ReadField<float>("expansionRate"); }
        void expansionRate(float value) const { WriteField<float>("expansionRate", value); }
        int maxLobes() const { return ReadField<int>("maxLobes"); }
        void maxLobes(int value) const { WriteField<int>("maxLobes", value); }
        float lobeDriftRate() const { return ReadField<float>("lobeDriftRate"); }
        void lobeDriftRate(float value) const { WriteField<float>("lobeDriftRate", value); }
        int lobeLifetimeMin() const { return ReadField<int>("lobeLifetimeMin"); }
        void lobeLifetimeMin(int value) const { WriteField<int>("lobeLifetimeMin", value); }
        int lobeLifetimeMax() const { return ReadField<int>("lobeLifetimeMax"); }
        void lobeLifetimeMax(int value) const { WriteField<int>("lobeLifetimeMax", value); }
    };
}
