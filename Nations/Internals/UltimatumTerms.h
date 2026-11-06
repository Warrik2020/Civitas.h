#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UltimatumTerms : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UltimatumTerms(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UltimatumTerms") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        void* landTiles() const { return ReadField<void*>("landTiles"); }
        void landTiles(void* value) const { WriteField<void*>("landTiles", value); }
        bool includesCapital() const { return ReadField<bool>("includesCapital"); }
        void includesCapital(bool value) const { WriteField<bool>("includesCapital", value); }
        float money() const { return ReadField<float>("money"); }
        void money(float value) const { WriteField<float>("money", value); }
        int factoryCount() const { return ReadField<int>("factoryCount"); }
        void factoryCount(int value) const { WriteField<int>("factoryCount", value); }
        int identityAxis() const { return ReadField<int>("identityAxis"); }
        void identityAxis(int value) const { WriteField<int>("identityAxis", value); }
        int identityGroupId() const { return ReadField<int>("identityGroupId"); }
        void identityGroupId(int value) const { WriteField<int>("identityGroupId", value); }
        int enemyId() const { return ReadField<int>("enemyId"); }
        void enemyId(int value) const { WriteField<int>("enemyId", value); }
        int recipientId() const { return ReadField<int>("recipientId"); }
        void recipientId(int value) const { WriteField<int>("recipientId", value); }
        bool backedByWar() const { return ReadField<bool>("backedByWar"); }
        void backedByWar(bool value) const { WriteField<bool>("backedByWar", value); }
    };
}
