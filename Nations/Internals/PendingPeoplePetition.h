#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PendingPeoplePetition : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PendingPeoplePetition(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PendingPeoplePetition") {}
    public:
        int ownerId() const { return ReadField<int>("ownerId"); }
        void ownerId(int value) const { WriteField<int>("ownerId", value); }
        int originId() const { return ReadField<int>("originId"); }
        void originId(int value) const { WriteField<int>("originId", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void createdTick(int value) const { WriteField<int>("createdTick", value); }
        int deadlineTick() const { return ReadField<int>("deadlineTick"); }
        void deadlineTick(int value) const { WriteField<int>("deadlineTick", value); }
        bool demand() const { return ReadField<bool>("demand"); }
        void demand(bool value) const { WriteField<bool>("demand", value); }
    };
}
