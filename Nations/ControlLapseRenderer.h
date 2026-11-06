#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class ControlLapseRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ControlLapseRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "ControlLapseRenderer") {}
    public:
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void SetFade(float alpha) const { void* args[] = { &alpha }; Call("SetFade", args, 1); }
        void Sync() const { Call("Sync", nullptr, 0); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        float Sample(int x, int y) const { void* args[] = { &x, &y }; return CallValue<float>("Sample", args, 2); }
        bool ChunkHasData(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallValue<bool>("ChunkHasData", args, 2); }
        void* Page(int cx, int cy) const { void* args[] = { &cx, &cy }; return Call("Page", args, 2); }
        bool ChunkFull(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallValue<bool>("ChunkFull", args, 2); }
        void Reserve(int n) const { void* args[] = { &n }; Call("Reserve", args, 1); }
        float Sample(int x, int y) const { void* args[] = { &x, &y }; return CallValue<float>("Sample", args, 2); }
        bool ChunkHasData(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallValue<bool>("ChunkHasData", args, 2); }
        void* Page(int cx, int cy) const { void* args[] = { &cx, &cy }; return Call("Page", args, 2); }
        bool ChunkFull(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallValue<bool>("ChunkFull", args, 2); }
        float hatchDarken() const { return ReadField<float>("hatchDarken"); }
        void SetHatchDarken(float value) const { WriteField<float>("hatchDarken", value); }
        float hatchAlpha() const { return ReadField<float>("hatchAlpha"); }
        void SetHatchAlpha(float value) const { WriteField<float>("hatchAlpha", value); }
        float outlineDarken() const { return ReadField<float>("outlineDarken"); }
        void SetOutlineDarken(float value) const { WriteField<float>("outlineDarken", value); }
        float outlineAlpha() const { return ReadField<float>("outlineAlpha"); }
        void SetOutlineAlpha(float value) const { WriteField<float>("outlineAlpha", value); }
        void* dusk() const { return ReadField<void*>("dusk"); }
        void SetDusk(void* value) const { WriteField<void*>("dusk", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        void* owners() const { return ReadField<void*>("owners"); }
        void SetOwners(void* value) const { WriteField<void*>("owners", value); }
        void* bars() const { return ReadField<void*>("bars"); }
        void SetBars(void* value) const { WriteField<void*>("bars", value); }
        void* lines() const { return ReadField<void*>("lines"); }
        void SetLines(void* value) const { WriteField<void*>("lines", value); }
        void* members() const { return ReadField<void*>("members"); }
        void SetMembers(void* value) const { WriteField<void*>("members", value); }
        void* bx0() const { return ReadField<void*>("bx0"); }
        void SetBx0(void* value) const { WriteField<void*>("bx0", value); }
        void* by0() const { return ReadField<void*>("by0"); }
        void SetBy0(void* value) const { WriteField<void*>("by0", value); }
        void* bx1() const { return ReadField<void*>("bx1"); }
        void SetBx1(void* value) const { WriteField<void*>("bx1", value); }
        void* by1() const { return ReadField<void*>("by1"); }
        void SetBy1(void* value) const { WriteField<void*>("by1", value); }
        void* hasData() const { return ReadField<void*>("hasData"); }
        void SetHasData(void* value) const { WriteField<void*>("hasData", value); }
        void* fullOwner() const { return ReadField<void*>("fullOwner"); }
        void SetFullOwner(void* value) const { WriteField<void*>("fullOwner", value); }
        int chunksWide() const { return ReadField<int>("chunksWide"); }
        void SetChunksWide(int value) const { WriteField<int>("chunksWide", value); }
        float width() const { return ReadField<float>("width"); }
        void SetWidth(float value) const { WriteField<float>("width", value); }
        float feather() const { return ReadField<float>("feather"); }
        void SetFeather(float value) const { WriteField<float>("feather", value); }
        void* bits() const { return ReadField<void*>("bits"); }
        void SetBits(void* value) const { WriteField<void*>("bits", value); }
        void* verts() const { return ReadField<void*>("verts"); }
        void* cols() const { return ReadField<void*>("cols"); }
        void* tris() const { return ReadField<void*>("tris"); }
    };
}
