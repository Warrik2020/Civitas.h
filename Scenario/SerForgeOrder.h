#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerForgeOrder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerForgeOrder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerForgeOrder") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        int forged() const { return ReadField<int>("forged"); }
        void SetForged(int value) const { WriteField<int>("forged", value); }
        void* parents() const { return ReadField<void*>("parents"); }
        void SetParents(void* value) const { WriteField<void*>("parents", value); }
        int started() const { return ReadField<int>("started"); }
        void SetStarted(int value) const { WriteField<int>("started", value); }
        int bestTick() const { return ReadField<int>("bestTick"); }
        void SetBestTick(int value) const { WriteField<int>("bestTick", value); }
        float bestShare() const { return ReadField<float>("bestShare"); }
        void SetBestShare(float value) const { WriteField<float>("bestShare", value); }
        float share() const { return ReadField<float>("share"); }
        void SetShare(float value) const { WriteField<float>("share", value); }
        bool ai() const { return ReadField<bool>("ai"); }
        void SetAi(bool value) const { WriteField<bool>("ai", value); }
        bool stalled() const { return ReadField<bool>("stalled"); }
        void SetStalled(bool value) const { WriteField<bool>("stalled", value); }
    };
}
