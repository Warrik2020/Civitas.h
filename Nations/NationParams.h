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
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        void* flag() const { return ReadField<void*>("flag"); }
        void SetFlag(void* value) const { WriteField<void*>("flag", value); }
        int culture() const { return ReadField<int>("culture"); }
        void SetCulture(int value) const { WriteField<int>("culture", value); }
        float heading() const { return ReadField<float>("heading"); }
        void SetHeading(float value) const { WriteField<float>("heading", value); }
        float coastalBias() const { return ReadField<float>("coastalBias"); }
        void SetCoastalBias(float value) const { WriteField<float>("coastalBias", value); }
        float expansionRate() const { return ReadField<float>("expansionRate"); }
        void SetExpansionRate(float value) const { WriteField<float>("expansionRate", value); }
        int maxLobes() const { return ReadField<int>("maxLobes"); }
        void SetMaxLobes(int value) const { WriteField<int>("maxLobes", value); }
        float lobeDriftRate() const { return ReadField<float>("lobeDriftRate"); }
        void SetLobeDriftRate(float value) const { WriteField<float>("lobeDriftRate", value); }
        int lobeLifetimeMin() const { return ReadField<int>("lobeLifetimeMin"); }
        void SetLobeLifetimeMin(int value) const { WriteField<int>("lobeLifetimeMin", value); }
        int lobeLifetimeMax() const { return ReadField<int>("lobeLifetimeMax"); }
        void SetLobeLifetimeMax(int value) const { WriteField<int>("lobeLifetimeMax", value); }
    };
}
