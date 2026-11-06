#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering::Fx
{
    class WarFx : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarFx(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering.Fx", "WarFx") {}
    public:
        void SetCoarseAlpha(float alpha) const { void* __callArgs[] = { &alpha }; Call("SetCoarseAlpha", __callArgs, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Advance(float dt) const { void* __callArgs[] = { &dt }; Call("Advance", __callArgs, 1); }
        void Draw(void* localToWorld, float zAir, float zGround, float pxPerTile) const { void* __callArgs[] = { localToWorld, &zAir, &zGround, &pxPerTile }; Call("Draw", __callArgs, 4); }
        void Idle() const { Call("Idle", nullptr, 0); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void SetFade(float fade) const { void* __callArgs[] = { &fade }; Call("SetFade", __callArgs, 1); }
        uint32_t Rgba(int r, int g, int b, int a) const { void* __callArgs[] = { &r, &g, &b, &a }; return CallStaticValue<uint32_t>("Rgba", __callArgs, 4); }
        uint32_t Rgba(void* c, float a) const { void* __callArgs[] = { c, &a }; return CallStaticValue<uint32_t>("Rgba", __callArgs, 2); }
        void MuzzleFlash(void* at, void* dir, float metres) const { void* __callArgs[] = { at, dir, &metres }; Call("MuzzleFlash", __callArgs, 3); }
        void ShotSmoke(void* at, void* dir, float metres, bool blackPowder) const { void* __callArgs[] = { at, dir, &metres, &blackPowder }; Call("ShotSmoke", __callArgs, 4); }
        void Tracer(void* from, void* to, float flight, uint32_t colour, float lengthMetres, bool impact = true) const { void* __callArgs[] = { from, to, &flight, &colour, &lengthMetres, &impact }; Call("Tracer", __callArgs, 6); }
        void MusketShot(void* from, void* dir, void* to, float flight, float loud = 1.0f) const { void* __callArgs[] = { from, dir, to, &flight, &loud }; Call("MusketShot", __callArgs, 5); }
        void RifleShot(void* from, void* dir, void* to, float flight, bool tracer, float loud = 1.0f) const { void* __callArgs[] = { from, dir, to, &flight, &tracer, &loud }; Call("RifleShot", __callArgs, 6); }
        void MgBurst(void* from, void* dir, void* to, float flight, int rounds, float spreadMetres, float loud = 1.0f) const { void* __callArgs[] = { from, dir, to, &flight, &rounds, &spreadMetres, &loud }; Call("MgBurst", __callArgs, 7); }
        void CannonShot(void* from, void* dir, float metres, bool blackPowder, float loud = 1.0f) const { void* __callArgs[] = { from, dir, &metres, &blackPowder, &loud }; Call("CannonShot", __callArgs, 5); }
        void IncomingShell(void* from, void* to, float flight, float blastMetres, bool crater, float loud = 1.0f) const { void* __callArgs[] = { from, to, &flight, &blastMetres, &crater, &loud }; Call("IncomingShell", __callArgs, 6); }
        void ShellImpact(void* at, float blastMetres, bool crater, float loud = 1.0f, float delay = 0.0f) const { void* __callArgs[] = { at, &blastMetres, &crater, &loud, &delay }; Call("ShellImpact", __callArgs, 5); }
        void Grenade(void* at, float loud = 1.0f, float delay = 0.0f) const { void* __callArgs[] = { at, &loud, &delay }; Call("Grenade", __callArgs, 3); }
        void Crater(void* at, float metres, float seconds, float delay = 0.0f) const { void* __callArgs[] = { at, &metres, &seconds, &delay }; Call("Crater", __callArgs, 4); }
        void Scorch(void* at, float metres, float seconds) const { void* __callArgs[] = { at, &metres, &seconds }; Call("Scorch", __callArgs, 3); }
        void Blood(void* at, float metres, float seconds) const { void* __callArgs[] = { at, &metres, &seconds }; Call("Blood", __callArgs, 3); }
        void Smoke(void* at, float metres, uint32_t colour, float seconds, void* vel) const { void* __callArgs[] = { at, &metres, &colour, &seconds, vel }; Call("Smoke", __callArgs, 5); }
        void Dust(void* at, float metres, float seconds, void* vel) const { void* __callArgs[] = { at, &metres, &seconds, vel }; Call("Dust", __callArgs, 4); }
        void Glint(void* at, float metres) const { void* __callArgs[] = { at, &metres }; Call("Glint", __callArgs, 2); }
        void Burning(void* at, float metres) const { void* __callArgs[] = { at, &metres }; Call("Burning", __callArgs, 2); }
        void FlashUnits(void* at, float sizeUnits, uint32_t colour, float life) const { void* __callArgs[] = { at, &sizeUnits, &colour, &life }; Call("FlashUnits", __callArgs, 4); }
        void TracerUnits(void* from, void* to, float flight, uint32_t colour, float lengthUnits, float widthUnits, uint32_t impactColour, int sparks) const { void* __callArgs[] = { from, to, &flight, &colour, &lengthUnits, &widthUnits, &impactColour, &sparks }; Call("TracerUnits", __callArgs, 8); }
        void ImpactSparks(void* at, uint32_t colour, int count, float sizeUnits, float delay) const { void* __callArgs[] = { at, &colour, &count, &sizeUnits, &delay }; Call("ImpactSparks", __callArgs, 5); }
        void RingUnits(void* at, float fromUnits, float toUnits, uint32_t colour, float life) const { void* __callArgs[] = { at, &fromUnits, &toUnits, &colour, &life }; Call("RingUnits", __callArgs, 5); }
        void TossUnits(void* at, int count, uint32_t colour, float sizeUnits, float speedUnits, float liftUnits) const { void* __callArgs[] = { at, &count, &colour, &sizeUnits, &speedUnits, &liftUnits }; Call("TossUnits", __callArgs, 6); }
        void PuffUnits(void* at, float sizeUnits, uint32_t colour, float life, void* vel, bool dust) const { void* __callArgs[] = { at, &sizeUnits, &colour, &life, vel, &dust }; Call("PuffUnits", __callArgs, 6); }
        void ScorchUnits(void* at, float sizeUnits, float seconds) const { void* __callArgs[] = { at, &sizeUnits, &seconds }; Call("ScorchUnits", __callArgs, 3); }
        void ShellNow(void* at, float height, float metres) const { void* __callArgs[] = { at, &height, &metres }; Call("ShellNow", __callArgs, 3); }
        void* Air() const { return ReadField<void*>("Air"); }
        void* Ground() const { return ReadField<void*>("Ground"); }
        float TilesPerMetre() const { return ReadField<float>("TilesPerMetre"); }
        void TilesPerMetre(float value) const { WriteField<float>("TilesPerMetre", value); }
        float MinPx() const { return ReadField<float>("MinPx"); }
        void MinPx(float value) const { WriteField<float>("MinPx", value); }
        float HeightShift() const { return ReadField<float>("HeightShift"); }
        void HeightShift(float value) const { WriteField<float>("HeightShift", value); }
        float SoundLevel() const { return ReadField<float>("SoundLevel"); }
        void SoundLevel(float value) const { WriteField<float>("SoundLevel", value); }
        void* Wind() const { return ReadField<void*>("Wind"); }
        void Wind(void* value) const { WriteField<void*>("Wind", value); }
        float CraterSeconds() const { return ReadField<float>("CraterSeconds"); }
        void CraterSeconds(float value) const { WriteField<float>("CraterSeconds", value); }
        float CoarseSmokeAlpha() const { return ReadField<float>("CoarseSmokeAlpha"); }
        void CoarseSmokeAlpha(float value) const { WriteField<float>("CoarseSmokeAlpha", value); }
    };
}
