#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class RivalSlot : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RivalSlot(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "RivalSlot") {}
    public:
        int rival() const { return ReadField<int>("rival"); }
        void SetRival(int value) const { WriteField<int>("rival", value); }
        int sinceTick() const { return ReadField<int>("sinceTick"); }
        void SetSinceTick(int value) const { WriteField<int>("sinceTick", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void SetArcId(int value) const { WriteField<int>("arcId", value); }
        int challenger() const { return ReadField<int>("challenger"); }
        void SetChallenger(int value) const { WriteField<int>("challenger", value); }
        int streak() const { return ReadField<int>("streak"); }
        void SetStreak(int value) const { WriteField<int>("streak", value); }
        int lowStreak() const { return ReadField<int>("lowStreak"); }
        void SetLowStreak(int value) const { WriteField<int>("lowStreak", value); }
        float score() const { return ReadField<float>("score"); }
        void SetScore(float value) const { WriteField<float>("score", value); }
        float heat() const { return ReadField<float>("heat"); }
        void SetHeat(float value) const { WriteField<float>("heat", value); }
        bool flared() const { return ReadField<bool>("flared"); }
        void SetFlared(bool value) const { WriteField<bool>("flared", value); }
    };
}
