#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceTable : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceTable(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceTable") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int loserId() const { return ReadField<int>("loserId"); }
        void SetLoserId(int value) const { WriteField<int>("loserId", value); }
        int victorId() const { return ReadField<int>("victorId"); }
        void SetVictorId(int value) const { WriteField<int>("victorId", value); }
        bool playerIsVictor() const { return ReadField<bool>("playerIsVictor"); }
        void SetPlayerIsVictor(bool value) const { WriteField<bool>("playerIsVictor", value); }
        bool playerCalled() const { return ReadField<bool>("playerCalled"); }
        void SetPlayerCalled(bool value) const { WriteField<bool>("playerCalled", value); }
        void* deal() const { return ReadField<void*>("deal"); }
        void SetDeal(void* value) const { WriteField<void*>("deal", value); }
        void* demand() const { return ReadField<void*>("demand"); }
        void SetDemand(void* value) const { WriteField<void*>("demand", value); }
        bool dictated() const { return ReadField<bool>("dictated"); }
        void SetDictated(bool value) const { WriteField<bool>("dictated", value); }
        bool lastStand() const { return ReadField<bool>("lastStand"); }
        void SetLastStand(bool value) const { WriteField<bool>("lastStand", value); }
        bool endsAllWars() const { return ReadField<bool>("endsAllWars"); }
        void SetEndsAllWars(bool value) const { WriteField<bool>("endsAllWars", value); }
        void* coalition() const { return ReadField<void*>("coalition"); }
        void* jointDemand() const { return ReadField<void*>("jointDemand"); }
        void SetJointDemand(void* value) const { WriteField<void*>("jointDemand", value); }
        int jointDemandKey() const { return ReadField<int>("jointDemandKey"); }
        void SetJointDemandKey(int value) const { WriteField<int>("jointDemandKey", value); }
        void* occupation() const { return ReadField<void*>("occupation"); }
        bool collapsed() const { return ReadField<bool>("collapsed"); }
        void SetCollapsed(bool value) const { WriteField<bool>("collapsed", value); }
        int queuedTick() const { return ReadField<int>("queuedTick"); }
        void SetQueuedTick(int value) const { WriteField<int>("queuedTick", value); }
    };
}
