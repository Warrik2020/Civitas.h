#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Notices
{
    class NoticeFeed : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NoticeFeed(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Notices", "NoticeFeed") {}
    public:
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* rt() const { return ReadField<void*>("rt"); }
        void SetRt(void* value) const { WriteField<void*>("rt", value); }
        void* group() const { return ReadField<void*>("group"); }
        void SetGroup(void* value) const { WriteField<void*>("group", value); }
        void* accent() const { return ReadField<void*>("accent"); }
        void SetAccent(void* value) const { WriteField<void*>("accent", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        void* textLe() const { return ReadField<void*>("textLe"); }
        void SetTextLe(void* value) const { WriteField<void*>("textLe", value); }
        void* close() const { return ReadField<void*>("close"); }
        void SetClose(void* value) const { WriteField<void*>("close", value); }
        void* actGo() const { return ReadField<void*>("actGo"); }
        void SetActGo(void* value) const { WriteField<void*>("actGo", value); }
        void* actLabel() const { return ReadField<void*>("actLabel"); }
        void SetActLabel(void* value) const { WriteField<void*>("actLabel", value); }
        void* actLe() const { return ReadField<void*>("actLe"); }
        void SetActLe(void* value) const { WriteField<void*>("actLe", value); }
        void* notice() const { return ReadField<void*>("notice"); }
        void SetNotice(void* value) const { WriteField<void*>("notice", value); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
        float age() const { return ReadField<float>("age"); }
        void SetAge(float value) const { WriteField<float>("age", value); }
        float life() const { return ReadField<float>("life"); }
        void SetLife(float value) const { WriteField<float>("life", value); }
        float enter() const { return ReadField<float>("enter"); }
        void SetEnter(float value) const { WriteField<float>("enter", value); }
        float leave() const { return ReadField<float>("leave"); }
        void SetLeave(float value) const { WriteField<float>("leave", value); }
        float pulse() const { return ReadField<float>("pulse"); }
        void SetPulse(float value) const { WriteField<float>("pulse", value); }
        float y() const { return ReadField<float>("y"); }
        void SetY(float value) const { WriteField<float>("y", value); }
        float width() const { return ReadField<float>("width"); }
        void SetWidth(float value) const { WriteField<float>("width", value); }
        float height() const { return ReadField<float>("height"); }
        void SetHeight(float value) const { WriteField<float>("height", value); }
        bool leaving() const { return ReadField<bool>("leaving"); }
        void SetLeaving(bool value) const { WriteField<bool>("leaving", value); }
        bool placed() const { return ReadField<bool>("placed"); }
        void SetPlaced(bool value) const { WriteField<bool>("placed", value); }
        bool hovered() const { return ReadField<bool>("hovered"); }
        void SetHovered(bool value) const { WriteField<bool>("hovered", value); }
    };
}
