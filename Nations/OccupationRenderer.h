#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class OccupationRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit OccupationRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "OccupationRenderer") {}
    public:
        void Sync() const { Call("Sync", nullptr, 0); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void SetFade(float alpha) const { void* args[] = { &alpha }; Call("SetFade", args, 1); }
        int CatchUp(int x0, int y0, int x1, int y1) const { void* args[] = { &x0, &y0, &x1, &y1 }; return CallValue<int>("CatchUp", args, 4); }
        int CountDeferred(int x0, int y0, int x1, int y1) const { void* args[] = { &x0, &y0, &x1, &y1 }; return CallValue<int>("CountDeferred", args, 4); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        float hatchWhiten() const { return ReadField<float>("hatchWhiten"); }
        void SetHatchWhiten(float value) const { WriteField<float>("hatchWhiten", value); }
        float hatchAlpha() const { return ReadField<float>("hatchAlpha"); }
        void SetHatchAlpha(float value) const { WriteField<float>("hatchAlpha", value); }
        float outlineWhiten() const { return ReadField<float>("outlineWhiten"); }
        void SetOutlineWhiten(float value) const { WriteField<float>("outlineWhiten", value); }
        float outlineAlpha() const { return ReadField<float>("outlineAlpha"); }
        void SetOutlineAlpha(float value) const { WriteField<float>("outlineAlpha", value); }
        float crowdedOutlineWhiten() const { return ReadField<float>("crowdedOutlineWhiten"); }
        void SetCrowdedOutlineWhiten(float value) const { WriteField<float>("crowdedOutlineWhiten", value); }
        float crowdedHatchWhiten() const { return ReadField<float>("crowdedHatchWhiten"); }
        void SetCrowdedHatchWhiten(float value) const { WriteField<float>("crowdedHatchWhiten", value); }
        float crowdedHatchAlpha() const { return ReadField<float>("crowdedHatchAlpha"); }
        void SetCrowdedHatchAlpha(float value) const { WriteField<float>("crowdedHatchAlpha", value); }
        float flashSeconds() const { return ReadField<float>("flashSeconds"); }
        void SetFlashSeconds(float value) const { WriteField<float>("flashSeconds", value); }
        float flashWhiten() const { return ReadField<float>("flashWhiten"); }
        void SetFlashWhiten(float value) const { WriteField<float>("flashWhiten", value); }
        float flashAlpha() const { return ReadField<float>("flashAlpha"); }
        void SetFlashAlpha(float value) const { WriteField<float>("flashAlpha", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        float born() const { return ReadField<float>("born"); }
        void SetBorn(float value) const { WriteField<float>("born", value); }
        void* col() const { return ReadField<void*>("col"); }
        void SetCol(void* value) const { WriteField<void*>("col", value); }
        int occupier() const { return ReadField<int>("occupier"); }
        void SetOccupier(int value) const { WriteField<int>("occupier", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        void SetTiles(void* value) const { WriteField<void*>("tiles", value); }
        bool crowded() const { return ReadField<bool>("crowded"); }
        void SetCrowded(bool value) const { WriteField<bool>("crowded", value); }
        bool pooled() const { return ReadField<bool>("pooled"); }
        void SetPooled(bool value) const { WriteField<bool>("pooled", value); }
        void* verts() const { return ReadField<void*>("verts"); }
        void SetVerts(void* value) const { WriteField<void*>("verts", value); }
        void* cols() const { return ReadField<void*>("cols"); }
        void SetCols(void* value) const { WriteField<void*>("cols", value); }
        void* uvs() const { return ReadField<void*>("uvs"); }
        void SetUvs(void* value) const { WriteField<void*>("uvs", value); }
        void* tris() const { return ReadField<void*>("tris"); }
        void SetTris(void* value) const { WriteField<void*>("tris", value); }
        int stamp() const { return ReadField<int>("stamp"); }
        void SetStamp(int value) const { WriteField<int>("stamp", value); }
    };
}
