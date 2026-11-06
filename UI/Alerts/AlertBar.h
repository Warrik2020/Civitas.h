#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Alerts
{
    class AlertBar : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AlertBar(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Alerts", "AlertBar") {}
    public:
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* rt() const { return ReadField<void*>("rt"); }
        void SetRt(void* value) const { WriteField<void*>("rt", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* glyphFallback() const { return ReadField<void*>("glyphFallback"); }
        void SetGlyphFallback(void* value) const { WriteField<void*>("glyphFallback", value); }
        void* badge() const { return ReadField<void*>("badge"); }
        void SetBadge(void* value) const { WriteField<void*>("badge", value); }
        void* badgeRt() const { return ReadField<void*>("badgeRt"); }
        void SetBadgeRt(void* value) const { WriteField<void*>("badgeRt", value); }
        void* hover() const { return ReadField<void*>("hover"); }
        void SetHover(void* value) const { WriteField<void*>("hover", value); }
        void* id() const { return ReadField<void*>("id"); }
        void SetId(void* value) const { WriteField<void*>("id", value); }
        int level() const { return ReadField<int>("level"); }
        void SetLevel(int value) const { WriteField<int>("level", value); }
        void* open() const { return ReadField<void*>("open"); }
        void SetOpen(void* value) const { WriteField<void*>("open", value); }
        float shownAt() const { return ReadField<float>("shownAt"); }
        void SetShownAt(float value) const { WriteField<float>("shownAt", value); }
        bool hovered() const { return ReadField<bool>("hovered"); }
        void SetHovered(bool value) const { WriteField<bool>("hovered", value); }
    };
}
