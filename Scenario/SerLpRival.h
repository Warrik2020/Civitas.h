#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLpRival : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLpRival(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLpRival") {}
    public:
        int rival() const { return ReadField<int>("rival"); }
        void rival(int value) const { WriteField<int>("rival", value); }
        int since() const { return ReadField<int>("since"); }
        void since(int value) const { WriteField<int>("since", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void arcId(int value) const { WriteField<int>("arcId", value); }
        int challenger() const { return ReadField<int>("challenger"); }
        void challenger(int value) const { WriteField<int>("challenger", value); }
        int streak() const { return ReadField<int>("streak"); }
        void streak(int value) const { WriteField<int>("streak", value); }
        int lowStreak() const { return ReadField<int>("lowStreak"); }
        void lowStreak(int value) const { WriteField<int>("lowStreak", value); }
        float score() const { return ReadField<float>("score"); }
        void score(float value) const { WriteField<float>("score", value); }
        float heat() const { return ReadField<float>("heat"); }
        void heat(float value) const { WriteField<float>("heat", value); }
        bool flared() const { return ReadField<bool>("flared"); }
        void flared(bool value) const { WriteField<bool>("flared", value); }
    };
}
