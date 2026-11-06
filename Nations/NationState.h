#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class NationState : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationState(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "NationState") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        void* flag() const { return ReadField<void*>("flag"); }
        void SetFlag(void* value) const { WriteField<void*>("flag", value); }
        int foundingCulture() const { return ReadField<int>("foundingCulture"); }
        void SetFoundingCulture(int value) const { WriteField<int>("foundingCulture", value); }
        int capitalIndex() const { return ReadField<int>("capitalIndex"); }
        void SetCapitalIndex(int value) const { WriteField<int>("capitalIndex", value); }
        int cx() const { return ReadField<int>("cx"); }
        void SetCx(int value) const { WriteField<int>("cx", value); }
        int cy() const { return ReadField<int>("cy"); }
        void SetCy(int value) const { WriteField<int>("cy", value); }
        void* reach() const { return ReadField<void*>("reach"); }
        void SetReach(void* value) const { WriteField<void*>("reach", value); }
        void* active() const { return ReadField<void*>("active"); }
        void SetActive(void* value) const { WriteField<void*>("active", value); }
        void* extent() const { return ReadField<void*>("extent"); }
        void SetExtent(void* value) const { WriteField<void*>("extent", value); }
        void* lobes() const { return ReadField<void*>("lobes"); }
        float coastalBias() const { return ReadField<float>("coastalBias"); }
        void SetCoastalBias(float value) const { WriteField<float>("coastalBias", value); }
        float expansionRate() const { return ReadField<float>("expansionRate"); }
        void SetExpansionRate(float value) const { WriteField<float>("expansionRate", value); }
        void* expansion() const { return ReadField<void*>("expansion"); }
        int maxLobes() const { return ReadField<int>("maxLobes"); }
        void SetMaxLobes(int value) const { WriteField<int>("maxLobes", value); }
        float lobeDriftRate() const { return ReadField<float>("lobeDriftRate"); }
        void SetLobeDriftRate(float value) const { WriteField<float>("lobeDriftRate", value); }
        int lobeLifetimeMin() const { return ReadField<int>("lobeLifetimeMin"); }
        void SetLobeLifetimeMin(int value) const { WriteField<int>("lobeLifetimeMin", value); }
        int lobeLifetimeMax() const { return ReadField<int>("lobeLifetimeMax"); }
        void SetLobeLifetimeMax(int value) const { WriteField<int>("lobeLifetimeMax", value); }
        float steerHeading() const { return ReadField<float>("steerHeading"); }
        void SetSteerHeading(float value) const { WriteField<float>("steerHeading", value); }
        float steerStrength() const { return ReadField<float>("steerStrength"); }
        void SetSteerStrength(float value) const { WriteField<float>("steerStrength", value); }
        int minX() const { return ReadField<int>("minX"); }
        void SetMinX(int value) const { WriteField<int>("minX", value); }
        int minY() const { return ReadField<int>("minY"); }
        void SetMinY(int value) const { WriteField<int>("minY", value); }
        int maxX() const { return ReadField<int>("maxX"); }
        void SetMaxX(int value) const { WriteField<int>("maxX", value); }
        int maxY() const { return ReadField<int>("maxY"); }
        void SetMaxY(int value) const { WriteField<int>("maxY", value); }
        int tileCount() const { return ReadField<int>("tileCount"); }
        void SetTileCount(int value) const { WriteField<int>("tileCount", value); }
        bool dirty() const { return ReadField<bool>("dirty"); }
        void SetDirty(bool value) const { WriteField<bool>("dirty", value); }
        bool regionsStale() const { return ReadField<bool>("regionsStale"); }
        void SetRegionsStale(bool value) const { WriteField<bool>("regionsStale", value); }
        int age() const { return ReadField<int>("age"); }
        void SetAge(int value) const { WriteField<int>("age", value); }
        int lastTakerId() const { return ReadField<int>("lastTakerId"); }
        void SetLastTakerId(int value) const { WriteField<int>("lastTakerId", value); }
    };
}
