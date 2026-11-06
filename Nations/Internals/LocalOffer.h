#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LocalOffer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalOffer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LocalOffer") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void arcId(int value) const { WriteField<int>("arcId", value); }
        int recordId() const { return ReadField<int>("recordId"); }
        void recordId(int value) const { WriteField<int>("recordId", value); }
        int fromId() const { return ReadField<int>("fromId"); }
        void fromId(int value) const { WriteField<int>("fromId", value); }
        int againstId() const { return ReadField<int>("againstId"); }
        void againstId(int value) const { WriteField<int>("againstId", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void createdTick(int value) const { WriteField<int>("createdTick", value); }
        int deadlineTick() const { return ReadField<int>("deadlineTick"); }
        void deadlineTick(int value) const { WriteField<int>("deadlineTick", value); }
        float gold() const { return ReadField<float>("gold"); }
        void gold(float value) const { WriteField<float>("gold", value); }
    };
}
