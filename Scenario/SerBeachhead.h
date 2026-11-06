#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerBeachhead : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerBeachhead(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerBeachhead") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        int water() const { return ReadField<int>("water"); }
        void SetWater(int value) const { WriteField<int>("water", value); }
        int targetNation() const { return ReadField<int>("targetNation"); }
        void SetTargetNation(int value) const { WriteField<int>("targetNation", value); }
        int ageTicks() const { return ReadField<int>("ageTicks"); }
        void SetAgeTicks(int value) const { WriteField<int>("ageTicks", value); }
    };
}
