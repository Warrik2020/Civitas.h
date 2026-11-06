#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Rendering
{
    class BattalionFlagRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattalionFlagRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Rendering", "BattalionFlagRenderer") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Hide() const { Call("Hide", nullptr, 0); }
        bool TryPick(void* screen, int& battalion, bool& formationBadge) const { void* args[] = { screen, &battalion, &formationBadge }; return CallValue<bool>("TryPick", args, 3); }
        void Sync() const { Call("Sync", nullptr, 0); }
        int form() const { return ReadField<int>("form"); }
        void SetForm(int value) const { WriteField<int>("form", value); }
        int bat() const { return ReadField<int>("bat"); }
        void SetBat(int value) const { WriteField<int>("bat", value); }
        void* at() const { return ReadField<void*>("at"); }
        void SetAt(void* value) const { WriteField<void*>("at", value); }
        void* foot() const { return ReadField<void*>("foot"); }
        void SetFoot(void* value) const { WriteField<void*>("foot", value); }
        float scale() const { return ReadField<float>("scale"); }
        void SetScale(float value) const { WriteField<float>("scale", value); }
        int glyph() const { return ReadField<int>("glyph"); }
        void SetGlyph(int value) const { WriteField<int>("glyph", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* nation() const { return ReadField<void*>("nation"); }
        void SetNation(void* value) const { WriteField<void*>("nation", value); }
        float strength() const { return ReadField<float>("strength"); }
        void SetStrength(float value) const { WriteField<float>("strength", value); }
        float morale() const { return ReadField<float>("morale"); }
        void SetMorale(float value) const { WriteField<float>("morale", value); }
        bool own() const { return ReadField<bool>("own"); }
        void SetOwn(bool value) const { WriteField<bool>("own", value); }
        bool selected() const { return ReadField<bool>("selected"); }
        void SetSelected(bool value) const { WriteField<bool>("selected", value); }
        bool held() const { return ReadField<bool>("held"); }
        void SetHeld(bool value) const { WriteField<bool>("held", value); }
        void* mark() const { return ReadField<void*>("mark"); }
        void SetMark(void* value) const { WriteField<void*>("mark", value); }
        int bat() const { return ReadField<int>("bat"); }
        void SetBat(int value) const { WriteField<int>("bat", value); }
        void* at() const { return ReadField<void*>("at"); }
        void SetAt(void* value) const { WriteField<void*>("at", value); }
        float halfW() const { return ReadField<float>("halfW"); }
        void SetHalfW(float value) const { WriteField<float>("halfW", value); }
        float halfH() const { return ReadField<float>("halfH"); }
        void SetHalfH(float value) const { WriteField<float>("halfH", value); }
    };
}
