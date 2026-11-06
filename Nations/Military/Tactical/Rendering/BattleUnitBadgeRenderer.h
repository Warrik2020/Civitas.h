#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Rendering
{
    class BattleUnitBadgeRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleUnitBadgeRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Rendering", "BattleUnitBadgeRenderer") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Hide() const { Call("Hide", nullptr, 0); }
        bool TryPick(void* screen, int& battalion) const { void* args[] = { screen, &battalion }; return CallValue<bool>("TryPick", args, 2); }
        bool TryPick(void* screen, int& battalion, bool& formationBadge) const { void* args[] = { screen, &battalion, &formationBadge }; return CallValue<bool>("TryPick", args, 3); }
        void Sync() const { Call("Sync", nullptr, 0); }
        void Sync(bool sections) const { void* args[] = { &sections }; Call("Sync", args, 1); }
        int bat() const { return ReadField<int>("bat"); }
        void SetBat(int value) const { WriteField<int>("bat", value); }
        bool formation() const { return ReadField<bool>("formation"); }
        void SetFormation(bool value) const { WriteField<bool>("formation", value); }
        void* at() const { return ReadField<void*>("at"); }
        void SetAt(void* value) const { WriteField<void*>("at", value); }
        void* top() const { return ReadField<void*>("top"); }
        void SetTop(void* value) const { WriteField<void*>("top", value); }
        float halfW() const { return ReadField<float>("halfW"); }
        void SetHalfW(float value) const { WriteField<float>("halfW", value); }
        float halfH() const { return ReadField<float>("halfH"); }
        void SetHalfH(float value) const { WriteField<float>("halfH", value); }
        int glyph() const { return ReadField<int>("glyph"); }
        void SetGlyph(int value) const { WriteField<int>("glyph", value); }
        void* nation() const { return ReadField<void*>("nation"); }
        void SetNation(void* value) const { WriteField<void*>("nation", value); }
        float health() const { return ReadField<float>("health"); }
        void SetHealth(float value) const { WriteField<float>("health", value); }
        bool own() const { return ReadField<bool>("own"); }
        void SetOwn(bool value) const { WriteField<bool>("own", value); }
        bool selected() const { return ReadField<bool>("selected"); }
        void SetSelected(bool value) const { WriteField<bool>("selected", value); }
        bool broken() const { return ReadField<bool>("broken"); }
        void SetBroken(bool value) const { WriteField<bool>("broken", value); }
        bool firing() const { return ReadField<bool>("firing"); }
        void SetFiring(bool value) const { WriteField<bool>("firing", value); }
        int bat() const { return ReadField<int>("bat"); }
        void SetBat(int value) const { WriteField<int>("bat", value); }
        bool formation() const { return ReadField<bool>("formation"); }
        void SetFormation(bool value) const { WriteField<bool>("formation", value); }
        void* at() const { return ReadField<void*>("at"); }
        void SetAt(void* value) const { WriteField<void*>("at", value); }
        float halfW() const { return ReadField<float>("halfW"); }
        void SetHalfW(float value) const { WriteField<float>("halfW", value); }
        float halfH() const { return ReadField<float>("halfH"); }
        void SetHalfH(float value) const { WriteField<float>("halfH", value); }
    };
}
