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
        void kind(int value) const { WriteField<int>("kind", value); }
        int loserId() const { return ReadField<int>("loserId"); }
        void loserId(int value) const { WriteField<int>("loserId", value); }
        int victorId() const { return ReadField<int>("victorId"); }
        void victorId(int value) const { WriteField<int>("victorId", value); }
        bool playerIsVictor() const { return ReadField<bool>("playerIsVictor"); }
        void playerIsVictor(bool value) const { WriteField<bool>("playerIsVictor", value); }
        bool playerCalled() const { return ReadField<bool>("playerCalled"); }
        void playerCalled(bool value) const { WriteField<bool>("playerCalled", value); }
        void* deal() const { return ReadField<void*>("deal"); }
        void deal(void* value) const { WriteField<void*>("deal", value); }
        void* demand() const { return ReadField<void*>("demand"); }
        void demand(void* value) const { WriteField<void*>("demand", value); }
        bool dictated() const { return ReadField<bool>("dictated"); }
        void dictated(bool value) const { WriteField<bool>("dictated", value); }
        bool lastStand() const { return ReadField<bool>("lastStand"); }
        void lastStand(bool value) const { WriteField<bool>("lastStand", value); }
        bool endsAllWars() const { return ReadField<bool>("endsAllWars"); }
        void endsAllWars(bool value) const { WriteField<bool>("endsAllWars", value); }
        void* coalition() const { return ReadField<void*>("coalition"); }
        void* jointDemand() const { return ReadField<void*>("jointDemand"); }
        void jointDemand(void* value) const { WriteField<void*>("jointDemand", value); }
        int jointDemandKey() const { return ReadField<int>("jointDemandKey"); }
        void jointDemandKey(int value) const { WriteField<int>("jointDemandKey", value); }
        void* occupation() const { return ReadField<void*>("occupation"); }
        bool collapsed() const { return ReadField<bool>("collapsed"); }
        void collapsed(bool value) const { WriteField<bool>("collapsed", value); }
        int queuedTick() const { return ReadField<int>("queuedTick"); }
        void queuedTick(int value) const { WriteField<int>("queuedTick", value); }
    };
}
