#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NationFocusView : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationFocusView(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NationFocusView") {}
    public:
        void Show(int nationId) const { void* args[] = { &nationId }; CallStatic("Show", args, 1); }
        void ShowMany(void* nationIds) const { void* args[] = { nationIds }; CallStatic("ShowMany", args, 1); }
        void Dismiss() const { CallStatic("Dismiss", nullptr, 0); }
        void Set(bool value) const { void* args[] = { &value }; Call("Set", args, 1); }
        int w() const { return ReadField<int>("w"); }
        void SetW(int value) const { WriteField<int>("w", value); }
        int h() const { return ReadField<int>("h"); }
        void SetH(int value) const { WriteField<int>("h", value); }
        void* loops() const { return ReadField<void*>("loops"); }
        void SetLoops(void* value) const { WriteField<void*>("loops", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        uint8_t r() const { return ReadField<uint8_t>("r"); }
        void SetR(uint8_t value) const { WriteField<uint8_t>("r", value); }
        uint8_t g() const { return ReadField<uint8_t>("g"); }
        void SetG(uint8_t value) const { WriteField<uint8_t>("g", value); }
        uint8_t b() const { return ReadField<uint8_t>("b"); }
        void SetB(uint8_t value) const { WriteField<uint8_t>("b", value); }
        void* owners() const { return ReadField<void*>("owners"); }
        void SetOwners(void* value) const { WriteField<void*>("owners", value); }
        int ownerW() const { return ReadField<int>("ownerW"); }
        void SetOwnerW(int value) const { WriteField<int>("ownerW", value); }
        int ownerH() const { return ReadField<int>("ownerH"); }
        void SetOwnerH(int value) const { WriteField<int>("ownerH", value); }
        float tileX0() const { return ReadField<float>("tileX0"); }
        void SetTileX0(float value) const { WriteField<float>("tileX0", value); }
        float tileY0() const { return ReadField<float>("tileY0"); }
        void SetTileY0(float value) const { WriteField<float>("tileY0", value); }
        float pxPerTile() const { return ReadField<float>("pxPerTile"); }
        void SetPxPerTile(float value) const { WriteField<float>("pxPerTile", value); }
        void* glow() const { return ReadField<void*>("glow"); }
        void SetGlow(void* value) const { WriteField<void*>("glow", value); }
        void* path() const { return ReadField<void*>("path"); }
        void SetPath(void* value) const { WriteField<void*>("path", value); }
        void* error() const { return ReadField<void*>("error"); }
        void SetError(void* value) const { WriteField<void*>("error", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* box() const { return ReadField<void*>("box"); }
        void SetBox(void* value) const { WriteField<void*>("box", value); }
        void* check() const { return ReadField<void*>("check"); }
        void SetCheck(void* value) const { WriteField<void*>("check", value); }
        bool on() const { return ReadField<bool>("on"); }
        void SetOn(bool value) const { WriteField<bool>("on", value); }
    };
}
