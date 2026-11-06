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
        void id(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        void* color() const { return ReadField<void*>("color"); }
        void color(void* value) const { WriteField<void*>("color", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void fill(void* value) const { WriteField<void*>("fill", value); }
        void* flag() const { return ReadField<void*>("flag"); }
        void flag(void* value) const { WriteField<void*>("flag", value); }
        int foundingCulture() const { return ReadField<int>("foundingCulture"); }
        void foundingCulture(int value) const { WriteField<int>("foundingCulture", value); }
        int capitalIndex() const { return ReadField<int>("capitalIndex"); }
        void capitalIndex(int value) const { WriteField<int>("capitalIndex", value); }
        int cx() const { return ReadField<int>("cx"); }
        void cx(int value) const { WriteField<int>("cx", value); }
        int cy() const { return ReadField<int>("cy"); }
        void cy(int value) const { WriteField<int>("cy", value); }
        void* reach() const { return ReadField<void*>("reach"); }
        void reach(void* value) const { WriteField<void*>("reach", value); }
        void* active() const { return ReadField<void*>("active"); }
        void active(void* value) const { WriteField<void*>("active", value); }
        void* extent() const { return ReadField<void*>("extent"); }
        void extent(void* value) const { WriteField<void*>("extent", value); }
        void* lobes() const { return ReadField<void*>("lobes"); }
        float coastalBias() const { return ReadField<float>("coastalBias"); }
        void coastalBias(float value) const { WriteField<float>("coastalBias", value); }
        float expansionRate() const { return ReadField<float>("expansionRate"); }
        void expansionRate(float value) const { WriteField<float>("expansionRate", value); }
        void* expansion() const { return ReadField<void*>("expansion"); }
        int maxLobes() const { return ReadField<int>("maxLobes"); }
        void maxLobes(int value) const { WriteField<int>("maxLobes", value); }
        float lobeDriftRate() const { return ReadField<float>("lobeDriftRate"); }
        void lobeDriftRate(float value) const { WriteField<float>("lobeDriftRate", value); }
        int lobeLifetimeMin() const { return ReadField<int>("lobeLifetimeMin"); }
        void lobeLifetimeMin(int value) const { WriteField<int>("lobeLifetimeMin", value); }
        int lobeLifetimeMax() const { return ReadField<int>("lobeLifetimeMax"); }
        void lobeLifetimeMax(int value) const { WriteField<int>("lobeLifetimeMax", value); }
        float steerHeading() const { return ReadField<float>("steerHeading"); }
        void steerHeading(float value) const { WriteField<float>("steerHeading", value); }
        float steerStrength() const { return ReadField<float>("steerStrength"); }
        void steerStrength(float value) const { WriteField<float>("steerStrength", value); }
        int minX() const { return ReadField<int>("minX"); }
        void minX(int value) const { WriteField<int>("minX", value); }
        int minY() const { return ReadField<int>("minY"); }
        void minY(int value) const { WriteField<int>("minY", value); }
        int maxX() const { return ReadField<int>("maxX"); }
        void maxX(int value) const { WriteField<int>("maxX", value); }
        int maxY() const { return ReadField<int>("maxY"); }
        void maxY(int value) const { WriteField<int>("maxY", value); }
        int tileCount() const { return ReadField<int>("tileCount"); }
        void tileCount(int value) const { WriteField<int>("tileCount", value); }
        bool dirty() const { return ReadField<bool>("dirty"); }
        void dirty(bool value) const { WriteField<bool>("dirty", value); }
        bool regionsStale() const { return ReadField<bool>("regionsStale"); }
        void regionsStale(bool value) const { WriteField<bool>("regionsStale", value); }
        int age() const { return ReadField<int>("age"); }
        void age(int value) const { WriteField<int>("age", value); }
        int lastTakerId() const { return ReadField<int>("lastTakerId"); }
        void lastTakerId(int value) const { WriteField<int>("lastTakerId", value); }
    };
}
