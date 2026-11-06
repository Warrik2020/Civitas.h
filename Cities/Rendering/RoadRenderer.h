#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Rendering
{
    class RoadRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RoadRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Rendering", "RoadRenderer") {}
    public:
        void Sync(void* roads) const { void* args[] = { roads }; Call("Sync", args, 1); }
        void SetHighlight(void* r) const { void* args[] = { r }; Call("SetHighlight", args, 1); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void SetZoomFade(float minorAlpha, float majorAlpha) const { void* args[] = { &minorAlpha, &majorAlpha }; Call("SetZoomFade", args, 2); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Tag(float kind, float minHalfPx) const { void* args[] = { &kind, &minHalfPx }; Call("Tag", args, 2); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void* v() const { return ReadField<void*>("v"); }
        void* c() const { return ReadField<void*>("c"); }
        void* t() const { return ReadField<void*>("t"); }
        void* uv() const { return ReadField<void*>("uv"); }
        void* uv2() const { return ReadField<void*>("uv2"); }
        void* layers() const { return ReadField<void*>("layers"); }
        int townA() const { return ReadField<int>("townA"); }
        void SetTownA(int value) const { WriteField<int>("townA", value); }
        int townB() const { return ReadField<int>("townB"); }
        void SetTownB(int value) const { WriteField<int>("townB", value); }
        float radA() const { return ReadField<float>("radA"); }
        void SetRadA(float value) const { WriteField<float>("radA", value); }
        float radB() const { return ReadField<float>("radB"); }
        void SetRadB(float value) const { WriteField<float>("radB", value); }
        float trimA() const { return ReadField<float>("trimA"); }
        void SetTrimA(float value) const { WriteField<float>("trimA", value); }
        float trimB() const { return ReadField<float>("trimB"); }
        void SetTrimB(float value) const { WriteField<float>("trimB", value); }
        void* chunk() const { return ReadField<void*>("chunk"); }
        void SetChunk(void* value) const { WriteField<void*>("chunk", value); }
        int seen() const { return ReadField<int>("seen"); }
        void SetSeen(int value) const { WriteField<int>("seen", value); }
        void* roads() const { return ReadField<void*>("roads"); }
        void* layers() const { return ReadField<void*>("layers"); }
        bool dirty() const { return ReadField<bool>("dirty"); }
        void SetDirty(bool value) const { WriteField<bool>("dirty", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* mesh() const { return ReadField<void*>("mesh"); }
        void SetMesh(void* value) const { WriteField<void*>("mesh", value); }
    };
}
