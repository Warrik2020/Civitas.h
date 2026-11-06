#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PendingCallToArms : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PendingCallToArms(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PendingCallToArms") {}
    public:
        int callerId() const { return ReadField<int>("callerId"); }
        void callerId(int value) const { WriteField<int>("callerId", value); }
        int enemyId() const { return ReadField<int>("enemyId"); }
        void enemyId(int value) const { WriteField<int>("enemyId", value); }
        int targetId() const { return ReadField<int>("targetId"); }
        void targetId(int value) const { WriteField<int>("targetId", value); }
        bool viaAlliance() const { return ReadField<bool>("viaAlliance"); }
        void viaAlliance(bool value) const { WriteField<bool>("viaAlliance", value); }
        bool offensive() const { return ReadField<bool>("offensive"); }
        void offensive(bool value) const { WriteField<bool>("offensive", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void createdTick(int value) const { WriteField<int>("createdTick", value); }
        int deadlineTick() const { return ReadField<int>("deadlineTick"); }
        void deadlineTick(int value) const { WriteField<int>("deadlineTick", value); }
    };
}
