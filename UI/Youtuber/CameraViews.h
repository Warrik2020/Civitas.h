#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Youtuber
{
    class CameraViews : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CameraViews(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Youtuber", "CameraViews") {}
    public:
        bool OwnsKey(void* key) const { void* args[] = { key }; return CallStaticValue<bool>("OwnsKey", args, 1); }
        void* KeyName(void* b) const { void* args[] = { b }; return CallStatic("KeyName", args, 1); }
        int SlotCount() const { return ReadStaticField<int>("SlotCount"); }
        int key() const { return ReadField<int>("key"); }
        void SetKey(int value) const { WriteField<int>("key", value); }
        bool ctrl() const { return ReadField<bool>("ctrl"); }
        void SetCtrl(bool value) const { WriteField<bool>("ctrl", value); }
        bool shift() const { return ReadField<bool>("shift"); }
        void SetShift(bool value) const { WriteField<bool>("shift", value); }
        bool alt() const { return ReadField<bool>("alt"); }
        void SetAlt(bool value) const { WriteField<bool>("alt", value); }
        bool cmd() const { return ReadField<bool>("cmd"); }
        void SetCmd(bool value) const { WriteField<bool>("cmd", value); }
        bool saved() const { return ReadField<bool>("saved"); }
        void SetSaved(bool value) const { WriteField<bool>("saved", value); }
        double x() const { return ReadField<double>("x"); }
        void SetX(double value) const { WriteField<double>("x", value); }
        double y() const { return ReadField<double>("y"); }
        void SetY(double value) const { WriteField<double>("y", value); }
        float ortho() const { return ReadField<float>("ortho"); }
        void SetOrtho(float value) const { WriteField<float>("ortho", value); }
        void* keys() const { return ReadField<void*>("keys"); }
        void SetKeys(void* value) const { WriteField<void*>("keys", value); }
        int move() const { return ReadField<int>("move"); }
        void SetMove(int value) const { WriteField<int>("move", value); }
        void* slots() const { return ReadField<void*>("slots"); }
        void SetSlots(void* value) const { WriteField<void*>("slots", value); }
    };
}
